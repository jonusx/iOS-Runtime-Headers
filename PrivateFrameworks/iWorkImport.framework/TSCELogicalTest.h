/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <TSUMultipleChoiceListChoiceProviding>, NSDate, NSString, TSCERegexMatcher;

@interface TSCELogicalTest : NSObject {
    struct TSCENumberValue { 
        int (**_vptr$TSCEAbstractValue)(); 
        double mDouble; 
        int mBaseUnits[1]; 
        struct TSUFormat { 
            int (**_vptr$TSUFormat)(); 
            int mFormatType; 
            boolmIsImplicitFormat; 
            union { 
                struct { 
                    NSString *mCurrencyCode; 
                    unsigned int mDecimalPlaces : 8; 
                    unsigned int mNegativeStyle : 3; 
                    unsigned int mShowThousandsSeparator : 1; 
                    unsigned int mUseAccountingStyle : 1; 
                } mNumberStruct; 
                struct { 
                    unsigned int mFractionAccuracy : 8; 
                } mFractionFormatStruct; 
                struct { 
                    unsigned int mBase : 8; 
                    unsigned int mBasePlaces : 8; 
                    unsigned int mBaseUseMinusSign : 1; 
                } mBaseFormatStruct; 
                struct { 
                    unsigned int mSuppressDateFormat : 1; 
                    unsigned int mSuppressTimeFormat : 1; 
                    NSString *mDateTimeFormat; 
                } mDateFormatStruct; 
                struct { 
                    unsigned int mUseAutomaticUnits : 1; 
                    int mDurationUnitSmallest; 
                    int mDurationUnitLargest; 
                    int mDurationStyle; 
                } mDurationFormatStruct; 
                struct { 
                    unsigned int mCustomFormatID; 
                    struct { /* ? */ } *mData; 
                } mCustomFormatStruct; 
                struct { 
                    double mMinimum; 
                    double mMaximum; 
                    double mIncrement; 
                    int mDisplayFormatType; 
                    unsigned int mOrientation : 2; 
                    unsigned int mPosition : 2; 
                } mControlFormatStruct; 
                struct { 
                    int mInitialValue; 
                    unsigned int mMultipleChoiceListFormatID; 
                    <TSUMultipleChoiceListChoiceProviding> *mData; 
                } mMultipleChoiceListFormatStruct; 
            } mData; 
            struct TSUCustomFormat {} *mCustomFormat; 
        } mFormat; 
        BOOL mIsUnitlessZero; 
    NSDate *mDate;
    TSCERegexMatcher *mMatcher;
    int mOperation;
    NSString *mString;
    } mValue;
}

+ (id)logicalTestWithCriterion:(struct TSCEValue { unsigned int x1[68]; int x2; })arg1 functionSpec:(id)arg2 warningReportingContext:(struct TSCEWarningReportingContext { BOOL x1; BOOL x2; struct ObjcSharedPtr<NSMutableSet> { id x_3_1_1; } x3; }*)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)compare:(struct TSCEValue { unsigned int x1[68]; int x2; })arg1;
- (int)criteriaParser:(id)arg1;
- (void)dealloc;
- (id)initWithCriterion:(struct TSCEValue { unsigned int x1[68]; int x2; })arg1 functionSpec:(id)arg2 warningReportingContext:(struct TSCEWarningReportingContext { BOOL x1; BOOL x2; struct ObjcSharedPtr<NSMutableSet> { id x_3_1_1; } x3; }*)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setRegexMatcher:(id)arg1;
- (void)setString:(id)arg1;

@end