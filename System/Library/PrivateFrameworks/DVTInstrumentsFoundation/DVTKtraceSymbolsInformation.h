//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DVTKtraceSymbolsInformation : NSObject
{
    struct map<unsigned long long, std::pair<unsigned long long, id>, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::pair<unsigned long long, id>>>> _symbolInfos;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000038e4e
- (void).cxx_destruct;	// IMP=0x0000000000038e3c
- (id)getSymbolInfoForAddress:(unsigned long long)arg1;	// IMP=0x0000000000038d50
- (void)addSymbolInfoForRange:(unsigned long long)arg1 length:(unsigned long long)arg2 symbolInfo:(id)arg3;	// IMP=0x0000000000038cbc

@end
