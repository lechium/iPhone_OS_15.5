//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REClassLoaderConfiguration-Protocol.h>

@class NSString;

@interface REDataSourceLoaderConfiguration : NSObject <REClassLoaderConfiguration>
{
}

+ (id)sharedInstance;	// IMP=0x0000000000006862
- (_Bool)shouldLoadBundleClass:(Class)arg1 forKey:(id)arg2;	// IMP=0x0000000000006954
- (Class)desiredClassFromBundle:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000068c8
- (Class)desiredClassForLoader;	// IMP=0x00000000000068b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

