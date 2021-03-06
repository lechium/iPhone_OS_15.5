//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface PMMorphunAssetManager : NSObject
{
    NSMutableSet *_supportedLang;	// 8 = 0x8
    NSMutableSet *_unsupportedLang;	// 16 = 0x10
}

+ (id)getObject;	// IMP=0x0040000000025a60
+ (id)log;	// IMP=0x0010000000025960
- (void).cxx_destruct;	// IMP=0x0020000000026570
- (id)downloadAssetForLanguage:(id)arg1 downloadTimeout:(unsigned long long)arg2;	// IMP=0x0010000000026330
- (id)assetPathForLanguage:(id)arg1;	// IMP=0x0010000000026170
- (_Bool)isLanguageSupported:(id)arg1 downloadTimeout:(unsigned long long)arg2;	// IMP=0x0010000000025c60
- (id)init;	// IMP=0x0010000000025b10

@end

