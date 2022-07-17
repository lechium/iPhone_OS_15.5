//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSURL;

@interface HDFHIRResourceSearchSet : NSObject
{
    NSArray *_entries;	// 8 = 0x8
    NSURL *_serverBaseURL;	// 16 = 0x10
    NSURL *_pageURL;	// 24 = 0x18
    NSURL *_nextPageURL;	// 32 = 0x20
}

+ (id)searchSetWithFHIRJSONObject:(id)arg1 serverBaseURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001c96f
- (void).cxx_destruct;	// IMP=0x000000000001d530
@property(readonly, copy, nonatomic) NSURL *nextPageURL; // @synthesize nextPageURL=_nextPageURL;
@property(readonly, copy, nonatomic) NSURL *pageURL; // @synthesize pageURL=_pageURL;
@property(readonly, copy, nonatomic) NSURL *serverBaseURL; // @synthesize serverBaseURL=_serverBaseURL;
@property(readonly, copy, nonatomic) NSArray *entries; // @synthesize entries=_entries;
- (id)_initWithEntries:(id)arg1 serverBaseURL:(id)arg2 pageURL:(id)arg3 nextPageURL:(id)arg4;	// IMP=0x000000000001c862

@end
