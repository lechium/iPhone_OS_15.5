//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CRSUIStatusBarStyleAssertionData : NSObject
{
    _Bool _siriPresentation;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    long long _interfaceStyle;	// 24 = 0x18
    long long _contrast;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000006c16
@property(nonatomic, getter=isSiriPresentation) _Bool siriPresentation; // @synthesize siriPresentation=_siriPresentation;
@property(nonatomic) long long contrast; // @synthesize contrast=_contrast;
@property(nonatomic) long long interfaceStyle; // @synthesize interfaceStyle=_interfaceStyle;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

@end
