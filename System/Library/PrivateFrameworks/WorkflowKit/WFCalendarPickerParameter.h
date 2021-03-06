//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFDynamicEnumerationDataSource-Protocol.h>

@class NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WFCalendarPickerParameter <WFDynamicEnumerationDataSource>
{
    _Bool _allowsAllCalendars;	// 8 = 0x8
    _Bool _hidesReadOnlyCalendars;	// 9 = 0x9
    id _defaultSerializedCalendarRepresentation;	// 16 = 0x10
    NSArray *_calendarStates;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_stateQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000020030a
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property(retain, nonatomic) NSArray *calendarStates; // @synthesize calendarStates=_calendarStates;
@property(retain, nonatomic) id defaultSerializedCalendarRepresentation; // @synthesize defaultSerializedCalendarRepresentation=_defaultSerializedCalendarRepresentation;
@property(readonly, nonatomic) _Bool hidesReadOnlyCalendars; // @synthesize hidesReadOnlyCalendars=_hidesReadOnlyCalendars;
@property(readonly, nonatomic) _Bool allowsAllCalendars; // @synthesize allowsAllCalendars=_allowsAllCalendars;
- (id)enumeration:(id)arg1 accessoryColorForPossibleState:(id)arg2;	// IMP=0x00000000001ffeed
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;	// IMP=0x00000000001ffd4e
- (void)possibleStatesDidChange;	// IMP=0x00000000001ffd0d
- (void)loadDefaultSerializedRepresentationForEnumeration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ffc09
- (void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ffb2d
- (void)clearPossibleStates;	// IMP=0x00000000001ffa9e
- (void)wasRemovedFromWorkflow;	// IMP=0x00000000001ffa05
- (void)wasAddedToWorkflow;	// IMP=0x00000000001ff95e
- (id)initWithDefinition:(id)arg1;	// IMP=0x00000000001ff752
- (Class)singleStateClass;	// IMP=0x00000000001ff741

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

