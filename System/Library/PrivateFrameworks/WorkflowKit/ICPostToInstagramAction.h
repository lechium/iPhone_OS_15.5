//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WFFileRepresentation;

@interface ICPostToInstagramAction
{
    WFFileRepresentation *_instagramRepresentation;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000290668
@property(retain, nonatomic) WFFileRepresentation *instagramRepresentation; // @synthesize instagramRepresentation=_instagramRepresentation;
- (void)shareAsImageFileWithItem:(id)arg1 caption:(id)arg2 userInterface:(id)arg3 successHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000290550
- (void)shareAsALAssetWithItem:(id)arg1 caption:(id)arg2 userInterface:(id)arg3 successHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000002902a1
- (void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000002900c7
- (id)inputContentClasses;	// IMP=0x0000000000290046
- (void)appDidResume:(id)arg1;	// IMP=0x000000000028ffb6
- (void)dealloc;	// IMP=0x000000000028ff19

@end

