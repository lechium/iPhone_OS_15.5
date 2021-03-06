//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreAudioKit/NSSecureCoding-Protocol.h>

@interface AUAudioUnitViewConfiguration : NSObject <NSSecureCoding>
{
    _Bool _hostHasController;	// 8 = 0x8
    double _width;	// 16 = 0x10
    double _height;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000013a7d
@property(readonly, nonatomic) _Bool hostHasController; // @synthesize hostHasController=_hostHasController;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) double width; // @synthesize width=_width;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000013b14
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000013a85
- (unsigned long long)hash;	// IMP=0x0000000000013a63
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000013965
- (id)initWithWidth:(double)arg1 height:(double)arg2 hostHasController:(_Bool)arg3;	// IMP=0x000000000001390c

@end

