//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface MFContentErrorDocument : NSObject
{
    NSError *_error;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000ca107
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSString *content;
- (id)initWithMimePart:(id)arg1;	// IMP=0x00000000000c9ddf

@end

