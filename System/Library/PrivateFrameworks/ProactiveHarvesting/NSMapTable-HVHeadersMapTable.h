//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMapTable.h>

#import <ProactiveHarvesting/HVHeaderCollection-Protocol.h>

@class NSString;

@interface NSMapTable (HVHeadersMapTable) <HVHeaderCollection>
+ (id)hv_headerValueFunctions;	// IMP=0x000000000000b478
+ (id)hv_headerKeyFunctions;	// IMP=0x000000000000b415
- (id)hv_firstHeaderForKey:(id)arg1;	// IMP=0x000000000000b282
- (void)hv_addEntriesFromHeadersDictionary:(id)arg1;	// IMP=0x000000000000b230

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

