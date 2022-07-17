//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMapTable;

@interface _NTKSharedJetsamInfo : NSObject
{
    NSMapTable *_fetchers;	// 8 = 0x8
    NSLock *_fetchersLock;	// 16 = 0x10
    int _pid;	// 24 = 0x18
}

+ (id)sharedJetsamInfo;	// IMP=0x000000000023b8e4
- (void).cxx_destruct;	// IMP=0x000000000023b9c5
- (void)unregister:(id)arg1;	// IMP=0x000000000023b955
- (_Bool)resetIntervalFor:(id)arg1;	// IMP=0x000000000023b94d
- (_Bool)getInfoFor:(id)arg1 into:(struct jetsam_info *)arg2;	// IMP=0x000000000023b945
- (id)init;	// IMP=0x000000000023b857

@end
