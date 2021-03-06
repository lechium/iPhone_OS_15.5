//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface _EDThreadScopeInfo : NSObject
{
    _Bool _needsUpdate;	// 8 = 0x8
    long long _databaseID;	// 16 = 0x10
    NSDate *_lastViewedDate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001741c8
@property(retain, nonatomic) NSDate *lastViewedDate; // @synthesize lastViewedDate=_lastViewedDate;
@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(readonly, nonatomic) long long databaseID; // @synthesize databaseID=_databaseID;
- (id)description;	// IMP=0x00000000001740cc
- (id)initWithDatabaseID:(long long)arg1 needsUpdate:(_Bool)arg2 lastViewedDate:(id)arg3;	// IMP=0x0000000000174037

@end

