import com.sun.jna.Memory;
import com.sun.jna.Pointer;
import com.sun.jna.ptr.PointerByReference;

public class ExperimentWithPointers {

    private ExperimentLibrary library = ExperimentLibrary.INSTANCE;

    public static void main(String... args) {
        new ExperimentWithPointers().execute();
    }

    public void execute() {
        takesAPointerAsParameter();
        System.out.println();
        takesAPointerToPointerAsParameter();
        System.out.println();
    }

    private void takesAPointerAsParameter() {
        Pointer pointer = new Memory(Pointer.SIZE);
        library.takesAPointerAndStoreAString(pointer);
        print(pointer.getString(0));
    }

    private void takesAPointerToPointerAsParameter() {
        PointerByReference pointerByReference = new PointerByReference();
        library.takesAPointerToPointerAndStoreAString(pointerByReference);
        print(pointerByReference.getValue().getString(0));
    }

    private void print(String string) {
        System.out.printf("CLIENT: pointer value is: %s\n", string);
    }
}