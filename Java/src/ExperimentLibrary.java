import com.sun.jna.*;
import com.sun.jna.ptr.PointerByReference;

public interface ExperimentLibrary extends Library {
    public static final ExperimentLibrary INSTANCE = (ExperimentLibrary) Native.loadLibrary("ExperimentLibrary", ExperimentLibrary.class);

    void takesAPointerAndStoreAString(Pointer pointer);
    void takesAPointerToPointerAndStoreAString(PointerByReference pointer);
}
