//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RenderBox/NSObject-Protocol.h>

@class NSData;
@protocol RBEncoderDelegate;

@protocol RBEncodable <NSObject>
- (NSData *)encodedDataForDelegate:(id <RBEncoderDelegate>)arg1 error:(id *)arg2;
@end
