//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REClassLoaderConfiguration-Protocol.h>

@class NSString;

@interface RERelevanceProviderManagerLoaderConfiguration : NSObject <REClassLoaderConfiguration>
{
}

+ (id)sharedInstance;	// IMP=0x00000000000d8c24
- (Class)desiredClassFromBundle:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000d8c8a
- (Class)desiredClassForLoader;	// IMP=0x00000000000d8c79

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
