//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NLTokenIDConverter : NSObject
{
}

- (void)enumerateTokenIDsForString:(id)arg1 range:(struct _NSRange)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000001eb1d
- (id)stringForTokenIDs:(const unsigned int *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000001eb15
- (id)stringForTokenID:(unsigned int)arg1;	// IMP=0x000000000001eb0d
- (unsigned int)tokenIDForString:(id)arg1;	// IMP=0x000000000001eb05

@end

