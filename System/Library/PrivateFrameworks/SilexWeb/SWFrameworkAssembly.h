//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexWeb/TFFrameworkAssembly-Protocol.h>

@class NSArray, NSString;

@interface SWFrameworkAssembly : NSObject <TFFrameworkAssembly>
{
    NSArray *_assemblies;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000d3a8
@property(readonly, copy, nonatomic) NSArray *assemblies; // @synthesize assemblies=_assemblies;
- (id)init;	// IMP=0x000000000000d255

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

