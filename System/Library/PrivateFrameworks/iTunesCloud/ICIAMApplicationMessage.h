//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ICIAMApplicationBadge, ICIAMLocalNotification, ICIAMMessageRule, ICIAMMetricEvent, NSMutableArray, NSString;

@interface ICIAMApplicationMessage : PBCodable <NSCopying>
{
    double _endDate;	// 8 = 0x8
    double _startDate;	// 16 = 0x10
    ICIAMApplicationBadge *_applicationBadge;	// 24 = 0x18
    int _assetPrefetchStrategy;	// 32 = 0x20
    NSMutableArray *_contentPages;	// 40 = 0x28
    int _globalPresentationPolicyGroup;	// 48 = 0x30
    ICIAMMetricEvent *_holdoutEvent;	// 56 = 0x38
    NSString *_identifier;	// 64 = 0x40
    ICIAMMetricEvent *_impressionEvent;	// 72 = 0x48
    ICIAMLocalNotification *_localNotification;	// 80 = 0x50
    int _maximumDisplays;	// 88 = 0x58
    int _messageType;	// 92 = 0x5c
    int _modalPresentationStyle;	// 96 = 0x60
    NSMutableArray *_presentationTriggers;	// 104 = 0x68
    int _priority;	// 112 = 0x70
    ICIAMMessageRule *_rule;	// 120 = 0x78
    NSMutableArray *_targets;	// 128 = 0x80
    NSString *_templateURL;	// 136 = 0x88
    NSString *_webArchiveURL;	// 144 = 0x90
    _Bool _carousel;	// 152 = 0x98
    _Bool _hasCloseButton;	// 153 = 0x99
    _Bool _reportingEnabled;	// 154 = 0x9a
    struct {
        unsigned int endDate:1;
        unsigned int startDate:1;
        unsigned int assetPrefetchStrategy:1;
        unsigned int globalPresentationPolicyGroup:1;
        unsigned int maximumDisplays:1;
        unsigned int messageType:1;
        unsigned int modalPresentationStyle:1;
        unsigned int priority:1;
        unsigned int carousel:1;
        unsigned int hasCloseButton:1;
        unsigned int reportingEnabled:1;
    } _has;	// 156 = 0x9c
}

+ (Class)presentationTriggersType;	// IMP=0x0000000000018c1e
+ (Class)contentPagesType;	// IMP=0x0000000000018c0d
+ (Class)targetType;	// IMP=0x0000000000018bfc
- (void).cxx_destruct;	// IMP=0x00000000000180f9
@property(retain, nonatomic) ICIAMApplicationBadge *applicationBadge; // @synthesize applicationBadge=_applicationBadge;
@property(retain, nonatomic) NSMutableArray *presentationTriggers; // @synthesize presentationTriggers=_presentationTriggers;
@property(retain, nonatomic) ICIAMMetricEvent *impressionEvent; // @synthesize impressionEvent=_impressionEvent;
@property(retain, nonatomic) ICIAMLocalNotification *localNotification; // @synthesize localNotification=_localNotification;
@property(retain, nonatomic) ICIAMMetricEvent *holdoutEvent; // @synthesize holdoutEvent=_holdoutEvent;
@property(retain, nonatomic) NSString *webArchiveURL; // @synthesize webArchiveURL=_webArchiveURL;
@property(retain, nonatomic) ICIAMMessageRule *rule; // @synthesize rule=_rule;
@property(retain, nonatomic) NSMutableArray *contentPages; // @synthesize contentPages=_contentPages;
@property(nonatomic) double endDate; // @synthesize endDate=_endDate;
@property(nonatomic) double startDate; // @synthesize startDate=_startDate;
@property(nonatomic) int maximumDisplays; // @synthesize maximumDisplays=_maximumDisplays;
@property(retain, nonatomic) NSString *templateURL; // @synthesize templateURL=_templateURL;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSMutableArray *targets; // @synthesize targets=_targets;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000178dc
- (unsigned long long)hash;	// IMP=0x00000000000173dd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000016ef5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000167c1
- (void)copyTo:(id)arg1;	// IMP=0x000000000001636c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000015e0d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000015e00
- (id)dictionaryRepresentation;	// IMP=0x000000000001533b
- (id)description;	// IMP=0x000000000001528c
@property(nonatomic) _Bool hasReportingEnabled;
@property(nonatomic) _Bool reportingEnabled; // @synthesize reportingEnabled=_reportingEnabled;
@property(readonly, nonatomic) _Bool hasApplicationBadge;
- (id)presentationTriggersAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000151e6
- (unsigned long long)presentationTriggersCount;	// IMP=0x00000000000151c9
- (void)addPresentationTriggers:(id)arg1;	// IMP=0x000000000001515f
- (void)clearPresentationTriggers;	// IMP=0x0000000000015142
@property(readonly, nonatomic) _Bool hasImpressionEvent;
@property(readonly, nonatomic) _Bool hasLocalNotification;
@property(readonly, nonatomic) _Bool hasHoldoutEvent;
- (int)StringAsAssetPrefetchStrategy:(id)arg1;	// IMP=0x0000000000015071
- (id)assetPrefetchStrategyAsString:(int)arg1;	// IMP=0x000000000001500b
@property(nonatomic) _Bool hasAssetPrefetchStrategy;
@property(nonatomic) int assetPrefetchStrategy; // @synthesize assetPrefetchStrategy=_assetPrefetchStrategy;
- (int)StringAsGlobalPresentationPolicyGroup:(id)arg1;	// IMP=0x0000000000014f40
- (id)globalPresentationPolicyGroupAsString:(int)arg1;	// IMP=0x0000000000014eeb
@property(nonatomic) _Bool hasGlobalPresentationPolicyGroup;
@property(nonatomic) int globalPresentationPolicyGroup; // @synthesize globalPresentationPolicyGroup=_globalPresentationPolicyGroup;
- (int)StringAsModalPresentationStyle:(id)arg1;	// IMP=0x0000000000014e20
- (id)modalPresentationStyleAsString:(int)arg1;	// IMP=0x0000000000014dcb
@property(nonatomic) _Bool hasModalPresentationStyle;
@property(nonatomic) int modalPresentationStyle; // @synthesize modalPresentationStyle=_modalPresentationStyle;
@property(readonly, nonatomic) _Bool hasWebArchiveURL;
@property(readonly, nonatomic) _Bool hasRule;
- (id)contentPagesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000014d19
- (unsigned long long)contentPagesCount;	// IMP=0x0000000000014cfc
- (void)addContentPages:(id)arg1;	// IMP=0x0000000000014c92
- (void)clearContentPages;	// IMP=0x0000000000014c75
@property(nonatomic) _Bool hasHasCloseButton;
@property(nonatomic) _Bool hasCloseButton; // @synthesize hasCloseButton=_hasCloseButton;
@property(nonatomic) _Bool hasEndDate;
@property(nonatomic) _Bool hasStartDate;
@property(nonatomic) _Bool hasMaximumDisplays;
@property(readonly, nonatomic) _Bool hasTemplateURL;
@property(nonatomic) _Bool hasPriority;
@property(nonatomic) _Bool hasCarousel;
@property(nonatomic) _Bool carousel; // @synthesize carousel=_carousel;
- (int)StringAsMessageType:(id)arg1;	// IMP=0x00000000000149a0
- (id)messageTypeAsString:(int)arg1;	// IMP=0x000000000001491f
@property(nonatomic) _Bool hasMessageType;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
- (id)targetAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000014897
- (unsigned long long)targetsCount;	// IMP=0x000000000001487a
- (void)addTarget:(id)arg1;	// IMP=0x0000000000014810
- (void)clearTargets;	// IMP=0x00000000000147f3
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

