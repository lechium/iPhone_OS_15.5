//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface MCDomainsCacheEntry : NSObject
{
    _Bool _subdomainsMatch;	// 8 = 0x8
    NSString *_domain;	// 16 = 0x10
    NSString *_path;	// 24 = 0x18
    NSNumber *_port;	// 32 = 0x20
}

+ (id)normalizedPatternString:(id)arg1;	// IMP=0x00000000000e3da4
- (void).cxx_destruct;	// IMP=0x00000000000e4a21
@property(retain, nonatomic) NSNumber *port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) _Bool subdomainsMatch; // @synthesize subdomainsMatch=_subdomainsMatch;
- (id)description;	// IMP=0x00000000000e47db
- (_Bool)matchesURL:(id)arg1;	// IMP=0x00000000000e4121
- (id)initWithPattern:(id)arg1;	// IMP=0x00000000000e3e8e

@end
