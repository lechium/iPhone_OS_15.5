//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NSMetadataQueryResultGroup : NSObject
{
    id _private[9];	// 8 = 0x8
    unsigned long long _private2[1];	// 80 = 0x50
    void *_reserved;	// 88 = 0x58
}

@property(readonly, copy) NSArray *results;
- (void)_zapResultArray;	// IMP=0x00000000000d4673
- (id)resultAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d459a
@property(readonly) unsigned long long resultCount;
@property(readonly, copy) NSArray *subgroups;
@property(readonly, retain) id value;
@property(readonly, copy) NSString *attribute;
- (void)_addResult:(unsigned long long)arg1;	// IMP=0x00000000000d43f3
- (void)dealloc;	// IMP=0x00000000000d4369
- (id)_init:(id)arg1 attributes:(id)arg2 index:(unsigned long long)arg3 value:(id)arg4;	// IMP=0x00000000000d42ad

@end
