//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCChecksummingOutputStream, NSData;

@interface BRCPackageChecksummer : NSObject
{
    BRCChecksummingOutputStream *_stream;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000015e83c
- (void)done;	// IMP=0x000000000015e826
- (_Bool)addItem:(id)arg1 error:(id *)arg2;	// IMP=0x000000000015e142
- (id)init;	// IMP=0x000000000015e0a7
@property(readonly, nonatomic) NSData *signature;

@end
