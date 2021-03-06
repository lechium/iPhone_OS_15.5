//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/VUIAppUserDefaultsStoring-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIAppUserDefaults : NSObject <VUIAppUserDefaultsStoring>
{
}

+ (id)sharedUserDefaults;	// IMP=0x000000000008265e
- (void)removeDataForKey:(id)arg1;	// IMP=0x000000000008282b
- (void)setData:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000082772
- (id)dataForKey:(id)arg1;	// IMP=0x00000000000826eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

