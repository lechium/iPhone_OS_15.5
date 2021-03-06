//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDFormula, EFTableData, NSString;
@protocol EFHelper;

__attribute__((visibility("hidden")))
@interface EFormula : NSObject
{
    id <EFHelper> mHelper;	// 8 = 0x8
    void *mYylex;	// 16 = 0x10
    Class mFormulaClass;	// 24 = 0x18
    EDFormula *mFormula;	// 32 = 0x20
    EFTableData *mTableData;	// 40 = 0x28
    NSString *mErrMsg;	// 48 = 0x30
}

+ (id)stringToFormula:(id)arg1 formulaHelper:(id)arg2 formulaClass:(Class)arg3;	// IMP=0x00000000001f460b
+ (id)singletonEFormula;	// IMP=0x00000000001f4690
- (void)setTableData:(id)arg1;	// IMP=0x00000000003b28bc
- (id)tableData;	// IMP=0x00000000003b28b2
- (id)resolveTable:(const char *)arg1 sheetIndex:(unsigned long long *)arg2;	// IMP=0x0000000000210eb3
- (unsigned long long)resolveFirstSheet:(id)arg1 lastSheet:(id)arg2;	// IMP=0x00000000003b288d
- (unsigned long long)resolveSheet:(const char *)arg1 isCurrentSheet:(_Bool *)arg2;	// IMP=0x00000000002112c2
- (unsigned long long)resolveName:(const char *)arg1;	// IMP=0x0000000000210c69
- (id)stringToTokens:(id)arg1;	// IMP=0x00000000001f477b
- (void)setFormulaClass:(Class)arg1;	// IMP=0x00000000001f4731
- (Class)formulaClass;	// IMP=0x00000000001f9ca7
- (void)setFormula:(id)arg1;	// IMP=0x00000000001f9fbe
- (void)setFormulaHelper:(id)arg1;	// IMP=0x00000000001f4745
- (id)formulaHelper;	// IMP=0x00000000001fa38b
- (void)dealloc;	// IMP=0x00000000001fa902

@end

