//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface AAClient : NSObject
{
    MISSING_TYPE *identifier;	// 8 = 0x8
    MISSING_TYPE *name;	// 24 = 0x18
    MISSING_TYPE *version;	// 40 = 0x28
    MISSING_TYPE *build;	// 56 = 0x38
    MISSING_TYPE *buildNumber;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000223b0
- (id)init;	// IMP=0x0000000000022350
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 version:(id)arg3 build:(long long)arg4;	// IMP=0x00000000000221d0
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 version:(id)arg3 buildNumber:(id)arg4;	// IMP=0x0000000000021f00
- (id)initWithBundle:(id)arg1;	// IMP=0x0000000000021dd0
@property(nonatomic, readonly) NSString *fullVersion;
@property(nonatomic, readonly) NSString *buildNumber;
@property(nonatomic, readonly) long long build; // @synthesize build;
@property(nonatomic, readonly) NSString *version;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSString *identifier;

@end

