//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface TPSAnalyticsEventContentViewed
{
    _Bool _animationFinished;	// 8 = 0x8
    _Bool _seenThisContentBefore;	// 9 = 0x9
    _Bool _hardwareWelcome;	// 10 = 0xa
    _Bool _softwareWelcome;	// 11 = 0xb
    _Bool _isNotificationModelControl;	// 12 = 0xc
    double _timeOnScreen;	// 16 = 0x10
    double _animationLoadTime;	// 24 = 0x18
    NSString *_contentID;	// 32 = 0x20
    NSString *_collectionID;	// 40 = 0x28
    NSString *_correlationID;	// 48 = 0x30
    NSString *_viewMethod;	// 56 = 0x38
    NSString *_viewMode;	// 64 = 0x40
    NSString *_contentStyle;	// 72 = 0x48
    NSString *_widgetType;	// 80 = 0x50
}

+ (void)setAppReferrer:(id)arg1;	// IMP=0x0000000000062e91
+ (void)incrementSessionViewNumberForKey:(id)arg1;	// IMP=0x0000000000062c48
+ (id)eventWithContentID:(id)arg1 collectionID:(id)arg2 correlationID:(id)arg3 viewMethod:(id)arg4 contentStyle:(id)arg5 viewMode:(id)arg6 timeOnScreen:(double)arg7 animationLoadTime:(double)arg8 animationFinished:(_Bool)arg9 seenThisContentBefore:(_Bool)arg10 hardwareWelcome:(_Bool)arg11 softwareWelcome:(_Bool)arg12;	// IMP=0x000000000006268e
+ (id)eventWithContentID:(id)arg1 collectionID:(id)arg2 correlationID:(id)arg3 widgetType:(id)arg4 hardwareWelcome:(_Bool)arg5 softwareWelcome:(_Bool)arg6;	// IMP=0x00000000000625c9
+ (_Bool)updateSessionViewNumber;	// IMP=0x0000000000061ef4
+ (void)resetSessionViewNumber;	// IMP=0x0000000000061e9c
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000061e94
- (void).cxx_destruct;	// IMP=0x0000000000063090
@property(retain, nonatomic) NSString *widgetType; // @synthesize widgetType=_widgetType;
@property(retain, nonatomic) NSString *contentStyle; // @synthesize contentStyle=_contentStyle;
@property(retain, nonatomic) NSString *viewMode; // @synthesize viewMode=_viewMode;
@property(retain, nonatomic) NSString *viewMethod; // @synthesize viewMethod=_viewMethod;
@property(retain, nonatomic) NSString *correlationID; // @synthesize correlationID=_correlationID;
@property(retain, nonatomic) NSString *collectionID; // @synthesize collectionID=_collectionID;
@property(retain, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property(nonatomic) _Bool isNotificationModelControl; // @synthesize isNotificationModelControl=_isNotificationModelControl;
@property(nonatomic) _Bool softwareWelcome; // @synthesize softwareWelcome=_softwareWelcome;
@property(nonatomic) _Bool hardwareWelcome; // @synthesize hardwareWelcome=_hardwareWelcome;
@property(nonatomic) _Bool seenThisContentBefore; // @synthesize seenThisContentBefore=_seenThisContentBefore;
@property(nonatomic) _Bool animationFinished; // @synthesize animationFinished=_animationFinished;
@property(nonatomic) double animationLoadTime; // @synthesize animationLoadTime=_animationLoadTime;
@property(nonatomic) double timeOnScreen; // @synthesize timeOnScreen=_timeOnScreen;
- (id)mutableAnalyticsEventRepresentation;	// IMP=0x0000000000062d20
@property(readonly, nonatomic) NSNumber *sessionViewNumber;
- (void)log;	// IMP=0x0000000000062b84
- (id)eventName;	// IMP=0x0000000000062b21
- (_Bool)isWidget;	// IMP=0x0000000000062afd
- (void)setDataProvider:(id)arg1;	// IMP=0x0000000000062a72
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000627c5
- (id)_initWithContentID:(id)arg1 collectionID:(id)arg2 correlationID:(id)arg3 widgetType:(id)arg4 hardwareWelcome:(_Bool)arg5 softwareWelcome:(_Bool)arg6;	// IMP=0x00000000000624b3
- (id)_initWithContentID:(id)arg1 collectionID:(id)arg2 correlationID:(id)arg3 viewMethod:(id)arg4 contentStyle:(id)arg5 viewMode:(id)arg6 timeOnScreen:(double)arg7 animationLoadTime:(double)arg8 animationFinished:(_Bool)arg9 seenThisContentBefore:(_Bool)arg10 hardwareWelcome:(_Bool)arg11 softwareWelcome:(_Bool)arg12;	// IMP=0x0000000000062302
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000061f4f

@end
