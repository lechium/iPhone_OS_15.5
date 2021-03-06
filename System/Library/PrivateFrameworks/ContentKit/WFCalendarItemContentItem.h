//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContentKit/WFContentItemClass-Protocol.h>

@class EKCalendarItem, EKEventStore, NSString;

@interface WFCalendarItemContentItem <WFContentItemClass>
{
    EKEventStore *_eventStore;	// 8 = 0x8
}

+ (id)countDescription;	// IMP=0x0000000000026dba
+ (id)pluralTypeDescription;	// IMP=0x0000000000026da9
+ (id)typeDescription;	// IMP=0x0000000000026d98
+ (id)contentCategories;	// IMP=0x0000000000026d1b
+ (id)outputTypes;	// IMP=0x0000000000026b46
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;	// IMP=0x0000000000026a1b
+ (id)propertyBuilders;	// IMP=0x00000000000263ae
- (void).cxx_destruct;	// IMP=0x000000000002603c
@property(retain, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
- (_Bool)canGenerateRepresentationForType:(id)arg1;	// IMP=0x0000000000025e38
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000025c7f
- (id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000025bb0
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;	// IMP=0x000000000002579f
@property(readonly, nonatomic) NSString *location;
@property(readonly, nonatomic) EKCalendarItem *calendarItem;
- (id)attachments;	// IMP=0x00000000000255c4
- (void)copyStateToItem:(id)arg1;	// IMP=0x00000000000255a9
- (id)changeTransaction;	// IMP=0x000000000002553e

@end

