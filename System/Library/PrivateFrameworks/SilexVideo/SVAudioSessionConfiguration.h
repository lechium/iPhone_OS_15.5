//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SVAudioSessionConfiguration : NSObject
{
    NSString *_category;	// 8 = 0x8
    NSString *_mode;	// 16 = 0x10
    unsigned long long _routeSharingPolicy;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000ba0c
@property(nonatomic) unsigned long long routeSharingPolicy; // @synthesize routeSharingPolicy=_routeSharingPolicy;
@property(copy, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
- (_Bool)isEqualToConfiguration:(id)arg1;	// IMP=0x000000000000b8a2
- (id)initWithCategory:(id)arg1 mode:(id)arg2 policy:(unsigned long long)arg3;	// IMP=0x000000000000b7fd

@end

