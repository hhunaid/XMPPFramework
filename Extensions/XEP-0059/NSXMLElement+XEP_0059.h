#import <Foundation/Foundation.h>

#if __has_include(<KissXML.h>)
#import "KissXML.h"
#else
@import KissXML;
#endif

@class XMPPResultSet;

NS_ASSUME_NONNULL_BEGIN
@interface NSXMLElement (XEP_0059)

@property (nonatomic, readonly) BOOL isResultSet;
@property (nonatomic, readonly) BOOL hasResultSet;
@property (nonatomic, readonly, nullable) XMPPResultSet *resultSet;

@end
NS_ASSUME_NONNULL_END
