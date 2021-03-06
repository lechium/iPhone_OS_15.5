//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FileProvider/NSCopying-Protocol.h>
#import <FileProvider/NSSecureCoding-Protocol.h>

@class NSArray, NSFileProviderSearchQuery;

@interface FPEnumerationSettings : NSObject <NSSecureCoding, NSCopying>
{
    NSArray *_sortDescriptors;	// 8 = 0x8
    NSFileProviderSearchQuery *_searchQuery;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b80d1
- (void).cxx_destruct;	// IMP=0x00000000000b8338
@property(copy) NSFileProviderSearchQuery *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(copy) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b81ac
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b813e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b80d9
- (id)init;	// IMP=0x00000000000b806b

@end

