//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BKIdentity;
@protocol BKMatchPearlOperationDelegate;

@interface BKMatchPearlOperation
{
    _Bool _longTimeout;	// 96 = 0x60
    _Bool _shouldAutoRetry;	// 97 = 0x61
    _Bool _preAugmentationCheck;	// 98 = 0x62
    _Bool _fullFaceOnly;	// 99 = 0x63
    BKIdentity *_preAugmentationCheckIdentity;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000005e68
@property(nonatomic) _Bool fullFaceOnly; // @synthesize fullFaceOnly=_fullFaceOnly;
@property(retain, nonatomic) BKIdentity *preAugmentationCheckIdentity; // @synthesize preAugmentationCheckIdentity=_preAugmentationCheckIdentity;
@property(nonatomic) _Bool preAugmentationCheck; // @synthesize preAugmentationCheck=_preAugmentationCheck;
@property(nonatomic) _Bool shouldAutoRetry; // @synthesize shouldAutoRetry=_shouldAutoRetry;
@property(nonatomic) _Bool longTimeout; // @synthesize longTimeout=_longTimeout;
- (_Bool)pauseFaceDetectTimer:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0000000000005d39
- (_Bool)enableAutoRetry:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0000000000005caf
- (_Bool)startNewMatchAttemptWithError:(id *)arg1;	// IMP=0x0000000000005c25

// Remaining properties
@property(nonatomic) __weak id <BKMatchPearlOperationDelegate> delegate; // @dynamic delegate;

@end

