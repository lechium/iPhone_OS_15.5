//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBHTestWidgetIconDescriptor-Protocol.h>

@class NSArray, NSString;

@interface SBHTestWidgetStackIconDescriptor : NSObject <SBHTestWidgetIconDescriptor>
{
    NSArray *_widgetIconDescriptors;	// 8 = 0x8
    unsigned long long _sizeClass;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000094917
@property(readonly, nonatomic) unsigned long long sizeClass; // @synthesize sizeClass=_sizeClass;
@property(readonly, nonatomic) NSArray *widgetIconDescriptors; // @synthesize widgetIconDescriptors=_widgetIconDescriptors;
- (unsigned long long)sbh_iconDescriptorType;	// IMP=0x00000000000948f8
- (_Bool)sbh_isValidWithError:(id *)arg1;	// IMP=0x00000000000948f0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000094800
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000947b7
- (id)init;	// IMP=0x0000000000094702
- (id)initWithWidgetIconDescriptors:(id)arg1;	// IMP=0x0000000000094638

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

