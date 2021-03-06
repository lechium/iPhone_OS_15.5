//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ChronoServices/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CHSWidgetKeysBox : NSObject <NSSecureCoding>
{
    NSArray *_widgetKeys;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001d3a3
- (void).cxx_destruct;	// IMP=0x000000000001d6d6
@property(readonly, copy, nonatomic) NSArray *widgetKeys; // @synthesize widgetKeys=_widgetKeys;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001d3cf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001d3ab
- (id)initWithWidgetKeys:(id)arg1;	// IMP=0x000000000001d304

@end

