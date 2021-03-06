//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/CTMessageAddress-Protocol.h>
#import <CoreTelephony/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CTEmailAddress : NSObject <NSCopying, CTMessageAddress>
{
    NSString *_address;	// 8 = 0x8
}

+ (id)emailAddress:(id)arg1;	// IMP=0x000000000003d486
- (void).cxx_destruct;	// IMP=0x000000000003d5a5
@property(readonly) NSString *address; // @synthesize address=_address;
- (id)canonicalFormat;	// IMP=0x000000000003d589
- (id)encodedString;	// IMP=0x000000000003d57b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003d542
- (id)initWithAddress:(id)arg1;	// IMP=0x000000000003d4cf

@end

