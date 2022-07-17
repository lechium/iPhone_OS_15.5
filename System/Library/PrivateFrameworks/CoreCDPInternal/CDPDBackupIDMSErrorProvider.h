//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CDPDBackupIDMSErrorProvider
{
}

- (void)handleSoftLimitError:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027c4c
- (void)handleHardLimitError:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027a6c
- (id)recordNotFoundErrorWithUnderlyingError:(id)arg1;	// IMP=0x00000000000279a0
- (id)hardLimitErrorForRecord:(id)arg1;	// IMP=0x0000000000027644
- (id)globalHardLimitErrorWithRecord:(id)arg1;	// IMP=0x0000000000027302
- (id)globalHardLimitError;	// IMP=0x000000000002702f
- (id)cooldownErrorWithUnderlyingError:(id)arg1;	// IMP=0x0000000000026d6f
- (_Bool)supportsErrorPresentation;	// IMP=0x0000000000026d67

@end
