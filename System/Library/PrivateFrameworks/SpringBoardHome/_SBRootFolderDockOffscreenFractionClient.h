//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/SBDockOffscreenFractionModifying-Protocol.h>

@class NSString, SBRootFolderView;

@interface _SBRootFolderDockOffscreenFractionClient : NSObject <SBDockOffscreenFractionModifying, BSDescriptionProviding>
{
    NSString *_reason;	// 8 = 0x8
    SBRootFolderView *_folderView;	// 16 = 0x10
    double _desiredOffscreenFraction;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000f1c24
@property(nonatomic) double desiredOffscreenFraction; // @synthesize desiredOffscreenFraction=_desiredOffscreenFraction;
@property(retain, nonatomic) SBRootFolderView *folderView; // @synthesize folderView=_folderView;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000f1afc
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000f1aac
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000f1a90
- (id)succinctDescription;	// IMP=0x00000000000f1a40
@property(readonly, copy) NSString *description;
- (void)invalidate;	// IMP=0x00000000000f19cf
- (void)layoutIfNeededForDockOffscreenFractionChanged;	// IMP=0x00000000000f19b9
- (void)setDockOffscreenFraction:(double)arg1;	// IMP=0x00000000000f18ba
- (void)dealloc;	// IMP=0x00000000000f17e7
- (id)initWithFolderView:(id)arg1 reason:(id)arg2;	// IMP=0x00000000000f173c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
