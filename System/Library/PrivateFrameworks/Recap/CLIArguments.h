//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CLIArguments : NSObject
{
    NSArray *_arguments;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000015eb5
@property(retain, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
- (id)consumeUpToIndex:(long long)arg1;	// IMP=0x0000000000015e43
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x0000000000015df4

@end

