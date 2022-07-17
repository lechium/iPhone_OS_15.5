//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BookLibraryCore/NSCopying-Protocol.h>
#import <BookLibraryCore/NSSecureCoding-Protocol.h>

@class NSError, NSNumber, NSString;

@interface BLRestoreResponseItem : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_storeItemID;	// 8 = 0x8
    NSString *_downloadID;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000d3f8
- (void).cxx_destruct;	// IMP=0x000000000000d718
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *downloadID; // @synthesize downloadID=_downloadID;
@property(retain, nonatomic) NSNumber *storeItemID; // @synthesize storeItemID=_storeItemID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000d5f3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000d510
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000d400
@property(readonly, nonatomic) _Bool success;
- (id)initWithStoreItemID:(id)arg1 downloadID:(id)arg2 error:(id)arg3;	// IMP=0x000000000000d30e

@end
