//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI2/TSAlertable-Protocol.h>

@class MISSING_TYPE, NSString;

@interface TSAlertArticleUnavailable : NSObject <TSAlertable>
{
    MISSING_TYPE *alert;	// 1634887214 = 0x6172662e
}

- (void).cxx_destruct;	// IMP=0x0000000000acfe10
- (id)init;	// IMP=0x0000000000acfd60
@property(nonatomic, readonly) NSString *message;
@property(nonatomic, readonly) NSString *title;
- (id)initWithType:(long long)arg1;	// IMP=0x0000000000acfb60
- (id)initWithBlockedReason:(unsigned long long)arg1;	// IMP=0x0000000000acf950

@end

