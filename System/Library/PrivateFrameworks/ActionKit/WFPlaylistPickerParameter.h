//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFAppleMusicAccessResource, WFPlaylistSubstitutableState;

@interface WFPlaylistPickerParameter : WFEnumerationParameter
{
    _Bool _showLibrary;	// 8 = 0x8
    _Bool _generatingNotifications;	// 9 = 0x9
    NSArray *_possibleStates;	// 16 = 0x10
    WFPlaylistSubstitutableState *_entireLibraryState;	// 24 = 0x18
    WFAppleMusicAccessResource *_appleMusicAccessResource;	// 32 = 0x20
}

+ (id)referencedActionResourceClasses;	// IMP=0x0000000000242fdc
+ (_Bool)hasPlaylistAccess;	// IMP=0x0000000000242fbb
- (void).cxx_destruct;	// IMP=0x00000000002427ad
@property(retain, nonatomic) WFAppleMusicAccessResource *appleMusicAccessResource; // @synthesize appleMusicAccessResource=_appleMusicAccessResource;
@property(nonatomic) _Bool generatingNotifications; // @synthesize generatingNotifications=_generatingNotifications;
@property(retain, nonatomic) WFPlaylistSubstitutableState *entireLibraryState; // @synthesize entireLibraryState=_entireLibraryState;
@property(readonly, nonatomic) _Bool showLibrary; // @synthesize showLibrary=_showLibrary;
- (id)defaultSerializedRepresentation;	// IMP=0x00000000002426a9
- (id)localizedLabelForPossibleState:(id)arg1;	// IMP=0x00000000002425e2
@property(readonly, nonatomic) NSArray *possibleStates; // @synthesize possibleStates=_possibleStates;
- (void)possibleStatesDidChange;	// IMP=0x00000000002423bf
- (void)updateChangeNotificationRegistration;	// IMP=0x00000000002422e5
- (void)authorizationStatusDidChange;	// IMP=0x00000000002422b7
- (void)wasRemovedFromWorkflow;	// IMP=0x000000000024220d
- (void)wasAddedToWorkflow;	// IMP=0x0000000000242159
- (void)setActionResources:(id)arg1;	// IMP=0x0000000000241fe1
- (id)initWithDefinition:(id)arg1;	// IMP=0x0000000000241e90
- (Class)singleStateClass;	// IMP=0x0000000000241e7f

@end
