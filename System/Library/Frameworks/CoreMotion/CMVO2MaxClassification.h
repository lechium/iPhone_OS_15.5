//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CMVO2MaxClassification : NSObject
{
    struct unique_ptr<CLVO2MaxClassifier, std::default_delete<CLVO2MaxClassifier>> fVO2MaxClassifier;	// 8 = 0x8
}

+ (int)CLHKBiologicalSexFromBiologicalSex:(long long)arg1;	// IMP=0x0000000000159785
+ (long long)biologicalSexFromCLHKBiologicalSex:(int)arg1;	// IMP=0x0000000000159770
- (id).cxx_construct;	// IMP=0x00000000001597aa
- (void).cxx_destruct;	// IMP=0x000000000015979a
- (id)classificationDataFromStruct:(struct CLVO2MaxClassificationData)arg1;	// IMP=0x00000000001595e5
- (void)queryClassificationForBiologicalSex:(long long)arg1 age:(long long)arg2 vo2Max:(double)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001593ca
- (void)queryClassificationForBiologicalSex:(long long)arg1 age:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001591b9
- (void)queryAllClassificationsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001590ba
- (id)init;	// IMP=0x0000000000159046

@end
