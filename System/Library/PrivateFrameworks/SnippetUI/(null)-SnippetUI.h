//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SnippetUI/VRXVisualResponse-Protocol.h>

@class NSArray, NSString;
@protocol VRXInteractionDelegate;

@interface (null) (SnippetUI) <VRXVisualResponse>
@property(nonatomic, readonly) NSArray *aceCommands;
@property(nonatomic) long long backgroundMaterial;
@property(nonatomic, retain) id <VRXInteractionDelegate> interactionDelegate;
@property(nonatomic) double snippetWidth;
@property(nonatomic) long long currentIdiom;
- (void)setPlayerState:(long long)arg1 aceId:(id)arg2;	// IMP=0x000000000009f690
- (void)setAsrText:(id)arg1;	// IMP=0x000000000009f610
- (void)updateSharedStateData:(id)arg1;	// IMP=0x000000000009f5a0
- (void)updateSharedState:(id)arg1;	// IMP=0x000000000009f130
@property(nonatomic, readonly) NSString *description;
@end
