//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CURangingMeasurement, NSDate, NSNumber, NSPersonNameComponents, NSSet, NSString, NSUUID;

@interface SFAirDropNode : NSObject
{
    struct __SFOperation *_sender;	// 8 = 0x8
    NSPersonNameComponents *_nameComponents;	// 16 = 0x10
    _Bool _disabled;	// 24 = 0x18
    _Bool _me;	// 25 = 0x19
    _Bool _unknown;	// 26 = 0x1a
    _Bool _monogram;	// 27 = 0x1b
    _Bool _classroom;	// 28 = 0x1c
    _Bool _classroomGroup;	// 29 = 0x1d
    _Bool _classroomCourse;	// 30 = 0x1e
    _Bool _suggestion;	// 31 = 0x1f
    _Bool _rapport;	// 32 = 0x20
    _Bool _supportsCredentials;	// 33 = 0x21
    _Bool _supportsFMF;	// 34 = 0x22
    _Bool _supportsPasses;	// 35 = 0x23
    _Bool _supportsMixedTypes;	// 36 = 0x24
    NSDate *_discoveryDate;	// 40 = 0x28
    id _node;	// 48 = 0x30
    NSString *_contactIdentifier;	// 56 = 0x38
    NSString *_realName;	// 64 = 0x40
    struct CGImage *_displayIcon;	// 72 = 0x48
    NSString *_displayName;	// 80 = 0x50
    NSString *_secondaryName;	// 88 = 0x58
    NSString *_model;	// 96 = 0x60
    NSString *_transportBundleID;	// 104 = 0x68
    NSSet *_formattedHandles;	// 112 = 0x70
    NSSet *_actualHandles;	// 120 = 0x78
    NSUUID *_nodeIdentifier;	// 128 = 0x80
    CURangingMeasurement *_rangingMeasurement;	// 136 = 0x88
    NSNumber *_suggestionIndex;	// 144 = 0x90
    NSSet *_contactIDs;	// 152 = 0x98
    NSString *_derivedIntentIdentifier;	// 160 = 0xa0
    long long _selectionReason;	// 168 = 0xa8
}

+ (id)nodeWithSFNode:(struct __SFNode *)arg1;	// IMP=0x0000000000019940
- (void).cxx_destruct;	// IMP=0x000000000001afcc
@property(readonly) _Bool supportsMixedTypes; // @synthesize supportsMixedTypes=_supportsMixedTypes;
@property(readonly) _Bool supportsPasses; // @synthesize supportsPasses=_supportsPasses;
@property(readonly) _Bool supportsFMF; // @synthesize supportsFMF=_supportsFMF;
@property(readonly) _Bool supportsCredentials; // @synthesize supportsCredentials=_supportsCredentials;
@property long long selectionReason; // @synthesize selectionReason=_selectionReason;
@property(getter=isRapport) _Bool rapport; // @synthesize rapport=_rapport;
@property(getter=isSuggestion) _Bool suggestion; // @synthesize suggestion=_suggestion;
@property(getter=isClassroomCourse) _Bool classroomCourse; // @synthesize classroomCourse=_classroomCourse;
@property(getter=isclassroomGroup) _Bool classroomGroup; // @synthesize classroomGroup=_classroomGroup;
@property(getter=isClassroom) _Bool classroom; // @synthesize classroom=_classroom;
@property(getter=isMonogram) _Bool monogram; // @synthesize monogram=_monogram;
@property(getter=isUnknown) _Bool unknown; // @synthesize unknown=_unknown;
@property(getter=isMe) _Bool me; // @synthesize me=_me;
@property(getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(copy, nonatomic) NSString *derivedIntentIdentifier; // @synthesize derivedIntentIdentifier=_derivedIntentIdentifier;
@property(retain, nonatomic) NSSet *contactIDs; // @synthesize contactIDs=_contactIDs;
@property(retain) NSNumber *suggestionIndex; // @synthesize suggestionIndex=_suggestionIndex;
@property(retain, nonatomic) CURangingMeasurement *rangingMeasurement; // @synthesize rangingMeasurement=_rangingMeasurement;
@property(retain) NSUUID *nodeIdentifier; // @synthesize nodeIdentifier=_nodeIdentifier;
@property(retain) NSSet *actualHandles; // @synthesize actualHandles=_actualHandles;
@property(retain) NSSet *formattedHandles; // @synthesize formattedHandles=_formattedHandles;
@property(retain) NSString *transportBundleID; // @synthesize transportBundleID=_transportBundleID;
@property(retain) NSString *model; // @synthesize model=_model;
@property(retain) NSString *secondaryName; // @synthesize secondaryName=_secondaryName;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) struct CGImage *displayIcon; // @synthesize displayIcon=_displayIcon;
@property(retain) NSString *realName; // @synthesize realName=_realName;
@property(retain) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(retain) id node; // @synthesize node=_node;
@property(readonly) NSDate *discoveryDate; // @synthesize discoveryDate=_discoveryDate;
- (void)handleOperationCallback:(struct __SFOperation *)arg1 event:(long long)arg2 withResults:(id)arg3;	// IMP=0x000000000001abbc
- (void)cancelSend;	// IMP=0x000000000001ab8d
- (void)startSendForBundleID:(id)arg1 sessionID:(id)arg2 items:(id)arg3 description:(id)arg4 previewImage:(struct CGImage *)arg5 fromShareSheet:(_Bool)arg6;	// IMP=0x000000000001a879
- (id)displayNameForLocale:(id)arg1;	// IMP=0x000000000001a6e5
- (void)appendDiscoveryInfoToDisplayName:(id)arg1;	// IMP=0x000000000001a43c
- (void)updateDisplayName;	// IMP=0x000000000001a1a0
- (void)updateWithSFNode:(struct __SFNode *)arg1;	// IMP=0x0000000000019d84
@property(readonly, getter=isKnown) _Bool known;
- (id)description;	// IMP=0x0000000000019b5e
- (unsigned long long)hash;	// IMP=0x0000000000019b23
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000019a15
- (void)dealloc;	// IMP=0x00000000000199d6
- (id)init;	// IMP=0x0000000000019978

@end
