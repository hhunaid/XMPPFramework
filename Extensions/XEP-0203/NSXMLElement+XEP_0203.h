#import <Foundation/Foundation.h>
#if __has_include(<KissXML.h>)
#import "KissXML.h"
#else
@import KissXML;
#endif

@class XMPPJID;

@interface NSXMLElement (XEP_0203)

@property (nonatomic, readonly) BOOL wasDelayed;
@property (nonatomic, readonly, nullable) NSDate *delayedDeliveryDate;
@property (nonatomic, readonly, nullable) XMPPJID *delayedDeliveryFrom;
@property (nonatomic, readonly, nullable) NSString *delayedDeliveryReasonDescription;

@end
