//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol AVTAvatarTransitionModel;

@interface AVTAvatarCellToStaticTransition
{
    id <AVTAvatarTransitionModel> _avatarTransitionModel;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000d5303
@property(readonly, nonatomic) id <AVTAvatarTransitionModel> avatarTransitionModel; // @synthesize avatarTransitionModel=_avatarTransitionModel;
- (void)performTransition;	// IMP=0x00000000000d5149
- (id)model;	// IMP=0x00000000000d5137
- (id)initWithModel:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3 logger:(id)arg4;	// IMP=0x00000000000d50a6

@end

