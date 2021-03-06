//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXModeEntityProtocol-Protocol.h>

@class ATXModeEntityScore, CHSWidget, NSString;

@interface ATXWidgetModeEntity : NSObject <ATXModeEntityProtocol>
{
    ATXModeEntityScore *_scoreMetadata;	// 8 = 0x8
    CHSWidget *_widget;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000055f8e
- (void).cxx_destruct;	// IMP=0x00000000000562bd
@property(copy, nonatomic) CHSWidget *widget; // @synthesize widget=_widget;
@property(retain, nonatomic) ATXModeEntityScore *scoreMetadata; // @synthesize scoreMetadata=_scoreMetadata;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000056220
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000056047
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000055f96
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000055e77
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)jsonDict;	// IMP=0x0000000000055c14
- (id)identifier;	// IMP=0x0000000000055b1c
- (id)initWithWidget:(id)arg1;	// IMP=0x0000000000055aa9

// Remaining properties
@property(readonly) Class superclass;

@end

