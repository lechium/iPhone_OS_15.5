//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXCPLUIStatus;

@interface PXCPLActionPerformer
{
    PXCPLUIStatus *_cplUIStatus;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000009b0b7
@property(readonly, nonatomic) PXCPLUIStatus *cplUIStatus; // @synthesize cplUIStatus=_cplUIStatus;
- (void)performActionWithCPLUIStatus:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000009afb1

@end
