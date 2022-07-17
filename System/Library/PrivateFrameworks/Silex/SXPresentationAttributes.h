//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SXPresentationAttributes : NSObject
{
    _Bool _fadeInComponents;	// 8 = 0x8
    _Bool _useTransparentToolbar;	// 9 = 0x9
    _Bool _enableViewportDebugging;	// 10 = 0xa
    _Bool _testingConditionEnabled;	// 11 = 0xb
    NSString *_contentSizeCategory;	// 16 = 0x10
    unsigned long long _presentationMode;	// 24 = 0x18
    double _contentScaleFactor;	// 32 = 0x20
    struct CGSize _canvasSize;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000056ed
@property(nonatomic) _Bool testingConditionEnabled; // @synthesize testingConditionEnabled=_testingConditionEnabled;
@property(nonatomic) _Bool enableViewportDebugging; // @synthesize enableViewportDebugging=_enableViewportDebugging;
@property(nonatomic) _Bool useTransparentToolbar; // @synthesize useTransparentToolbar=_useTransparentToolbar;
@property(nonatomic) double contentScaleFactor; // @synthesize contentScaleFactor=_contentScaleFactor;
@property(nonatomic) _Bool fadeInComponents; // @synthesize fadeInComponents=_fadeInComponents;
@property(nonatomic) unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property(retain, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
- (id)description;	// IMP=0x00000000000054bb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000005395
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000050ea
- (unsigned long long)hash;	// IMP=0x0000000000005088
- (id)init;	// IMP=0x0000000000005046

@end
