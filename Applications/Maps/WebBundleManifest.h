//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface WebBundleManifest : NSObject
{
    NSString *_version;	// 8 = 0x8
    NSSet *_files;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000893385
- (void).cxx_destruct;	// IMP=0x002000000089358b
@property(retain, nonatomic) NSSet *files; // @synthesize files=_files;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000089341a
- (unsigned long long)hash;	// IMP=0x001000000089338d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000893317
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000008931e0
- (id)initWithVersion:(id)arg1 files:(id)arg2;	// IMP=0x0010000000893142

@end

