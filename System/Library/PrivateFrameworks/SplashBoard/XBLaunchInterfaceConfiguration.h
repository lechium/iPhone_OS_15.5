//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SplashBoard/BSXPCCoding-Protocol.h>
#import <SplashBoard/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface XBLaunchInterfaceConfiguration : NSObject <BSXPCCoding, NSSecureCoding>
{
    _Bool _imageRespectsSafeAreaInsets;	// 8 = 0x8
    NSString *_colorName;	// 16 = 0x10
    NSString *_imageName;	// 24 = 0x18
    NSArray *_bars;	// 32 = 0x20
    NSString *_navigationBarImageName;	// 40 = 0x28
    NSString *_toolbarImageName;	// 48 = 0x30
    NSString *_tabBarImageName;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000003611
- (void).cxx_destruct;	// IMP=0x0000000000003e4e
@property(readonly, copy, nonatomic) NSString *tabBarImageName; // @synthesize tabBarImageName=_tabBarImageName;
@property(readonly, copy, nonatomic) NSString *toolbarImageName; // @synthesize toolbarImageName=_toolbarImageName;
@property(readonly, copy, nonatomic) NSString *navigationBarImageName; // @synthesize navigationBarImageName=_navigationBarImageName;
@property(readonly, nonatomic) NSArray *bars; // @synthesize bars=_bars;
@property(readonly, nonatomic) _Bool imageRespectsSafeAreaInsets; // @synthesize imageRespectsSafeAreaInsets=_imageRespectsSafeAreaInsets;
@property(readonly, copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, copy, nonatomic) NSString *colorName; // @synthesize colorName=_colorName;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003a7b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003619
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x000000000000355c
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x000000000000344a
- (id)initWithConfigurationDictionary:(id)arg1;	// IMP=0x000000000000317e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
