//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface MTLBinaryEntry : NSObject
{
    NSObject<OS_dispatch_data> *_data;	// 8 = 0x8
    NSArray *_importedLibraries;	// 16 = 0x10
    NSArray *_importedSymbols;	// 24 = 0x18
}

@property(readonly) NSArray *importedLibraries; // @synthesize importedLibraries=_importedLibraries;
@property(readonly) NSArray *importedSymbols; // @synthesize importedSymbols=_importedSymbols;
@property(readonly) NSObject<OS_dispatch_data> *data; // @synthesize data=_data;
- (id)description;	// IMP=0x0000000000024c37
- (void)dealloc;	// IMP=0x0000000000024be4
- (id)initWithData:(id)arg1 importedSymbols:(id)arg2 importedLibraries:(id)arg3;	// IMP=0x0000000000024b6c

@end
