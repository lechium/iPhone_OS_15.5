//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/NSCopying-Protocol.h>
#import <IDSFoundation/NSSecureCoding-Protocol.h>

@class IDSCKServerChangeToken, NSArray;

@interface IDSCKFetchRecordZoneChangesOptions : NSObject <NSSecureCoding, NSCopying>
{
    IDSCKServerChangeToken *_previousServerChangeToken;	// 8 = 0x8
    unsigned long long _resultsLimit;	// 16 = 0x10
    NSArray *_desiredKeys;	// 24 = 0x18
}

+ (id)alloc;	// IMP=0x000000000007b845
+ (Class)__class;	// IMP=0x000000000007b7f5
- (void).cxx_destruct;	// IMP=0x000000000007b8a5
@property(copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(copy, nonatomic) IDSCKServerChangeToken *previousServerChangeToken; // @synthesize previousServerChangeToken=_previousServerChangeToken;

@end
