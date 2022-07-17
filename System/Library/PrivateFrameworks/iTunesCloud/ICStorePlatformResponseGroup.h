//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICStorePlatformResponse-Protocol.h>

@class NSArray, NSDate, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface ICStorePlatformResponseGroup : NSObject <ICStorePlatformResponse>
{
    NSArray *_childResponses;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001517ef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001517e4
@property(readonly, nonatomic) NSArray *performanceMetrics;
@property(readonly, copy, nonatomic) id rawResponse;
@property(readonly, copy, nonatomic) NSString *storefrontIdentifier;
- (id)itemForIdentifier:(id)arg1;	// IMP=0x00000000001512e3
@property(readonly, copy, nonatomic) NSDate *expirationDate;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000015108c
@property(readonly, copy, nonatomic) NSNumber *enqueuerAccountIdentifier;
@property(readonly, copy, nonatomic) NSArray *allItems;
@property(readonly, copy, nonatomic) NSNumber *accountIdentifier;
- (id)initWithResponses:(id)arg1;	// IMP=0x0000000000150d0e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
