//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AAUIHandleWithKind : NSObject
{
    NSString *_handle;	// 8 = 0x8
    unsigned long long _kind;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000707fd
@property(readonly, nonatomic) unsigned long long kind; // @synthesize kind=_kind;
@property(readonly, copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
- (id)initWithHandle:(id)arg1 kind:(unsigned long long)arg2;	// IMP=0x0000000000070773

@end

